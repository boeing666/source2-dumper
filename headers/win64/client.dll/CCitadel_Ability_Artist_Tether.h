#pragma once

class CCitadel_Ability_Artist_Tether : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x20A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bSuccess; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    GameTime_t m_tLastSuccessfulLookTime; // offset 0x16E4, size 0x4, align 255
    CHandle< C_BaseEntity > m_pSelectedTarget; // offset 0x16E8, size 0x4, align 4
    int32 m_iPermanentBuffCount; // offset 0x16EC, size 0x4, align 4
    char _pad_16F0[0x9B8]; // offset 0x16F0
};
