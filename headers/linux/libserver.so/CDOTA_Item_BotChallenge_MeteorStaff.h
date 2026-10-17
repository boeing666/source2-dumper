#pragma once

class CDOTA_Item_BotChallenge_MeteorStaff : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x934, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x938, size 0x4, align 255
    VectorWS m_vecCastPosition; // offset 0x93C, size 0xC, align 4
};
