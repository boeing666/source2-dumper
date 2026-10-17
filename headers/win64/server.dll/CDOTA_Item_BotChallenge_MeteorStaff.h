#pragma once

class CDOTA_Item_BotChallenge_MeteorStaff : public CDOTA_Item /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x660, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x664, size 0x4, align 255
    VectorWS m_vecCastPosition; // offset 0x668, size 0xC, align 4
    char _pad_0674[0x4]; // offset 0x674
};
