#pragma once

class C_DOTA_Item_BotChallenge_MeteorStaff : public C_DOTA_Item /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8D4]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x8D4, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x8D8, size 0x4, align 255
    VectorWS m_vecCastPosition; // offset 0x8DC, size 0xC, align 4
};
