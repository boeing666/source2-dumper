#pragma once

class CCitadelPlayerPawn_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x490, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< char* > m_pszSprintState; // offset 0x90, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszFullBodySequence; // offset 0xC0, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszFlinchType; // offset 0xF0, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bShootLean; // offset 0x120, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flReloadFraction; // offset 0x148, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementInputActive; // offset 0x170, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bLowHealth; // offset 0x198, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flTimeScale; // offset 0x1C0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bCrouching; // offset 0x1E8, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bInAir; // offset 0x210, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bShopOpen; // offset 0x238, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bRespawn; // offset 0x260, size 0x28, align 8
    CAnimGraphTagRef m_sAnimClippedMovement; // offset 0x288, size 0x20, align 8
    CAnimGraphTagRef m_sDisableGravity; // offset 0x2A8, size 0x20, align 8
    CAnimGraphTagRef m_sDirectAirControl; // offset 0x2C8, size 0x20, align 8
    CAnimGraphParamRef< char* > m_pszMaxSpeedState; // offset 0x2E8, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszDeathSequence; // offset 0x318, size 0x30, align 8
    CAnimGraphParamRef< char* > m_pszWallAttach; // offset 0x348, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bHardLanding; // offset 0x378, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flUltCooldownProgress; // offset 0x3A0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bSpawn; // offset 0x3C8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flAmmoFraction; // offset 0x3F0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flLookPitchRelativeToEyes; // offset 0x418, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flSlideSurfacePitch; // offset 0x440, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flSlideSurfaceRoll; // offset 0x468, size 0x28, align 8
};
