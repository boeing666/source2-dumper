#pragma once

class CCitadel_Ability_Unicorn_LuminousStrike : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    GameTime_t m_flLastStackChangeTime; // offset 0x16E0, size 0x4, align 255
    int32 m_nLastStackCount; // offset 0x16E4, size 0x4, align 4
    char _pad_16E8[0x18]; // offset 0x16E8
    C_NetworkUtlVectorBase< GameTime_t > m_vecNextExplosionTime; // offset 0x1700, size 0x18, align 8
    C_NetworkUtlVectorBase< VectorWS > m_vecNextExplosionLocation; // offset 0x1718, size 0x18, align 8
    int32 m_nStackCount; // offset 0x1730, size 0x4, align 4
    bool m_bPendingStackUpdate; // offset 0x1734, size 0x1, align 1
    char _pad_1735[0x4D3]; // offset 0x1735
};
