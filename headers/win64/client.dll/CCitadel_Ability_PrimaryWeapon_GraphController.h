#pragma once

class CCitadel_Ability_PrimaryWeapon_GraphController : public CCitadelBaseAbilityGraphController /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Shoot; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Muzzle; // offset 0xD8, size 0x18, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_ReloadState; // offset 0xF0, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_ReloadFraction; // offset 0x120, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_ReloadSpeed; // offset 0x148, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_AmmoFraction; // offset 0x170, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_Ammo; // offset 0x198, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_AmmoMax; // offset 0x1C0, size 0x28, align 8
    int32 m_nShootPriority; // offset 0x1E8, size 0x4, align 4
    int32 m_nReloadPriority; // offset 0x1EC, size 0x4, align 4
    float32 m_flLatchedReloadSpeed; // offset 0x1F0, size 0x4, align 4
    char _pad_01F4[0x4]; // offset 0x1F4
    CGlobalSymbol m_symLastMuzzle; // offset 0x1F8, size 0x8, align 8
};
