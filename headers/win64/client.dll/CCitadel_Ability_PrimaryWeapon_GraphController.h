#pragma once

class CCitadel_Ability_PrimaryWeapon_GraphController : public CCitadelBaseAbilityGraphController /*0x0*/  // sizeof 0x298, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< bool > m_bAiming; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flReloadSpeed; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bReloadingSingleRoundStart; // offset 0xE0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bReloadingSingleRound; // offset 0x108, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bReloading; // offset 0x130, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bShootAlt; // offset 0x158, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bShoot; // offset 0x180, size 0x28, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Shoot; // offset 0x1A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Muzzle; // offset 0x1C0, size 0x18, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_ReloadState; // offset 0x1D8, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_ReloadFraction; // offset 0x208, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_ReloadSpeed; // offset 0x230, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_AmmoFraction; // offset 0x258, size 0x28, align 8
    int32 m_nShootPriority; // offset 0x280, size 0x4, align 4
    int32 m_nReloadPriority; // offset 0x284, size 0x4, align 4
    float32 m_flLatchedReloadSpeed; // offset 0x288, size 0x4, align 4
    char _pad_028C[0x4]; // offset 0x28C
    CGlobalSymbol m_symLastMuzzle; // offset 0x290, size 0x8, align 8
};
