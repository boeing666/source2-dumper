#pragma once

class CCS2WeaponGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bActionReset; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType; // offset 0x120, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo; // offset 0x138, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo; // offset 0x150, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax; // offset 0x168, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve; // offset 0x180, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced; // offset 0x198, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount; // offset 0x1B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel; // offset 0x1C8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_idleVariation; // offset 0x1E0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_deployVariation; // offset 0x1F8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType; // offset 0x210, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength; // offset 0x228, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation; // offset 0x240, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation; // offset 0x258, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo; // offset 0x270, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage; // offset 0x288, size 0x18, align 8
    char _pad_02A0[0x320]; // offset 0x2A0
};
