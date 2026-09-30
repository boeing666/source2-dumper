#pragma once

class CCitadel_Ability_GooGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecPuddleModifiers; // offset 0x16D8, size 0x18, align 8
    char _pad_16F0[0x6E0]; // offset 0x16F0
    GameTime_t m_LastDetonateTime; // offset 0x1DD0, size 0x4, align 255
    char _pad_1DD4[0x4]; // offset 0x1DD4
};
