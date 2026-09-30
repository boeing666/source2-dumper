#pragma once

class CCitadel_Ability_Unicorn_LuminousStrike : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    GameTime_t m_flLastStackChangeTime; // offset 0x16D8, size 0x4, align 255
    int32 m_nLastStackCount; // offset 0x16DC, size 0x4, align 4
    char _pad_16E0[0x18]; // offset 0x16E0
    C_NetworkUtlVectorBase< GameTime_t > m_vecNextExplosionTime; // offset 0x16F8, size 0x18, align 8
    C_NetworkUtlVectorBase< VectorWS > m_vecNextExplosionLocation; // offset 0x1710, size 0x18, align 8
    int32 m_nStackCount; // offset 0x1728, size 0x4, align 4
    bool m_bPendingStackUpdate; // offset 0x172C, size 0x1, align 1
    char _pad_172D[0x4D3]; // offset 0x172D
};
