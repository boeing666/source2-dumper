#pragma once

class CCS2WeaponGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x2A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // offset 0x88, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bActionReset; // offset 0xA0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale; // offset 0xB8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory; // offset 0xD0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType; // offset 0xE8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo; // offset 0x100, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo; // offset 0x118, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax; // offset 0x130, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve; // offset 0x148, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced; // offset 0x160, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount; // offset 0x178, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel; // offset 0x190, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_idleVariation; // offset 0x1A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_deployVariation; // offset 0x1C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType; // offset 0x1D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength; // offset 0x1F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation; // offset 0x208, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation; // offset 0x220, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo; // offset 0x238, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage; // offset 0x250, size 0x18, align 8
    char _pad_0268[0x38]; // offset 0x268
};
