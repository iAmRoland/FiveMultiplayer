#pragma once

#ifdef __cplusplus
extern "C" {
#endif
	namespace API
	{
		class Vehicle
		{
		public:
			/// <summary>
			/// Creates a vehicle of a desired model at the position defined
			/// </summary>
			/// <param name="model">The model of the vehicle you wish to create</param>
			/// <param name="position">The position you wish to create the vehicle at</param>
			/// <param name="heading">The direction you wish the vehicle to be facing</param>
			/// <returns name="entity">The vehicles server entity id</returns>
			DLL_PUBLIC_I static const int Create(const std::wstring model, const CVector3 position, const float heading);

			/// <summary>
			/// Creates a vehicle of a desired model at the position defined
			/// </summary>
			/// <param name="model">The model of the vehicle you wish to create</param>
			/// <param name="position">The position you wish to create the vehicle at</param>
			/// <param name="heading">The rotation you wish to set the vehicle at</param>
			/// <returns name="entity">The vehicles server entity id</returns>
			DLL_PUBLIC_I static const int Create(const std::wstring model, const CVector3 position, const CVector3 rotation);

			/// <summary>
			/// Sets the vehicles color using the Games standard preset colors
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="layer">The paint layer to change the color off (1 or 2)</param>
			/// <param name="painttype">The type of paint ( 0: Normal - 1: Metallic - 2 : Pearl - 3 : Matte - 4 : Metal - 5 : Chrome )</param>
			/// <param name="color">The color preset to use</param>
			DLL_PUBLIC_I static void SetColor(const int entity, const int layer, const int painttype, const int color);

			/// <summary>
			/// Sets the vehicles color using RGB colors
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="layer">The paint layer to change the color off (1 or 2)</param>
			/// <param name="color">The custom RGB color (alpha is not used)</param>
			DLL_PUBLIC_I static void SetColor(const int entity, const int layer, const Color color);

			/// <summary>
			/// Gets the vehicles number plate
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <returns name="plate">The vehicles number plate</returns>
			DLL_PUBLIC_I static const std::wstring GetNumberPlate(const int entity);

			/// <summary>
			/// Sets the vehicles number plate
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="plate">The number plate text. (Must be 8 or less chars)</param>
			DLL_PUBLIC_I static void SetNumberPlate(const int entity, const std::wstring plate);

			/// <summary>
			/// Gets the index of the modType on the vehicle being used
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="modType">The mod type to get the modIndex for (pastebin.com/mL1MUmrf)</param>
			/// <returns name="modIndex">The mod index installed on the vehicle of the mod type</returns>
			DLL_PUBLIC_I static const int GetMod(const int entity, const int modType);

			/// <summary>
			/// Sets the index of the modType on the vehicle
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="modType">The mod type to set the index of (pastebin.com/mL1MUmrf)</param>
			/// <param name="modIndex">The mod index to use for the modType</param>
			DLL_PUBLIC_I static void SetMod(const int entity, const int modType, const int modIndex);

			/// <summary>
			/// Gets the engine state of the vehicle
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <returns name="state">The engine state</returns>
			DLL_PUBLIC_I static const bool GetEngineState(const int entity);

			/// <summary>
			/// Set the engine state of the vehicle
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="state">The state to set the engine</param>
			DLL_PUBLIC_I static void SetEngineState(const int entity, const bool state);

			/// <summary>
			/// Get the doors locked state of the vehicle
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <returns name="state">The locked state</returns>
			DLL_PUBLIC_I static const int GetDoorsLockState(const int entity);

			/// <summary>
			/// Set the doors locked state of the vehicle
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="state">The state to set the locks (0 - CARLOCK_NONE, 1 - CARLOCK_UNLOCKED, 2 - CARLOCK_LOCKED(locked), 3 - CARLOCK_LOCKOUT_PLAYER_ONLY, 4 - CARLOCK_LOCKED_PLAYER_INSIDE(can get in, can't leave))</param>
			DLL_PUBLIC_I static void SetDoorsLockState(const int entity, const int state);

			/// <summary>
			/// Set the doors locked state of the vehicle
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <param name="state">The state to set the locks (0 - CARLOCK_NONE, 1 - CARLOCK_UNLOCKED, 2 - CARLOCK_LOCKED(locked), 3 - CARLOCK_LOCKOUT_PLAYER_ONLY, 4 - CARLOCK_LOCKED_PLAYER_INSIDE(can get in, can't leave))</param>
			/// <param name="player">The entity of the player you whish to check the vehicles lock state for.</param>
			DLL_PUBLIC_I static void SetDoorsLockState(const int entity, const int state, const int player);

			/// <summary>
			/// Get the vehicles model
			/// </summary>
			/// <param name="entity">The entity of the vehicle</param>
			/// <returns name="model">The model</returns>
			DLL_PUBLIC_I static const std::wstring GetModel(const int entity);
		};
	}
#ifdef __cplusplus
}
#endif