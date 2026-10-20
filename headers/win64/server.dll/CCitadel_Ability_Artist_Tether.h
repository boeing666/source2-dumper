#pragma once

class CCitadel_Ability_Artist_Tether : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1E78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    bool m_bSuccess; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0x3]; // offset 0x14AD
    GameTime_t m_tLastSuccessfulLookTime; // offset 0x14B0, size 0x4, align 255
    CHandle< CBaseEntity > m_pSelectedTarget; // offset 0x14B4, size 0x4, align 4
    int32 m_iPermanentBuffCount; // offset 0x14B8, size 0x4, align 4
    char _pad_14BC[0x9BC]; // offset 0x14BC
};
