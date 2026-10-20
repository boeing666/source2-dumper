#pragma once

class CCitadel_Ability_GooGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecPuddleModifiers; // offset 0x16E0, size 0x18, align 8
    char _pad_16F8[0x6E0]; // offset 0x16F8
    GameTime_t m_LastDetonateTime; // offset 0x1DD8, size 0x4, align 255
    char _pad_1DDC[0x4]; // offset 0x1DDC
};
