#include "stdafx.h"

void CRPCObject::Create(RakNet::BitStream *bitStream, RakNet::Packet *packet)
{
	int entity;
	int hash = 0;
	RakString model;
	CVector3 position;
	CVector4 quaternion;
	bool dynamic, isHash;

	bitStream->Read(entity);
	bitStream->Read(isHash);
	if(isHash)
		bitStream->Read(hash);
	else
		bitStream->Read(model);
	bitStream->Read(position.fX);
	bitStream->Read(position.fY);
	bitStream->Read(position.fZ);
	bitStream->Read(quaternion.fX);
	bitStream->Read(quaternion.fY);
	bitStream->Read(quaternion.fZ);
	bitStream->Read(quaternion.fW);
	bitStream->Read(dynamic);

	CObjectEntity newObject;

	if (!isHash)
		GAMEPLAY::GET_HASH_KEY((char*)model.C_String());

	if (newObject.Create(entity, hash, position, quaternion, dynamic))
		g_Objects.push_back(newObject);
}

void CRPCObject::SetTextureVariation(RakNet::BitStream *bitStream, RakNet::Packet *packet)
{
	int entity, textureindex;

	bitStream->Read(entity);
	bitStream->Read(textureindex);

	for (int i = 0; i < g_Objects.size(); i++) {
		if (g_Objects[i].GetId() == entity) {
			g_Objects[i].SetTextureVariation(textureindex);
			break;
		}
	}
}