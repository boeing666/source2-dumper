#pragma once

class CDOTA_Modifier_Windrunner_GaleForce : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vFlowPosition; // offset 0x1AB4, size 0xC, align 4
    Vector m_vPull; // offset 0x1AC0, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ACC, size 0x4, align 255
    GameTime_t m_flLastThinkTime; // offset 0x1AD0, size 0x4, align 255
    float32 wind_strength; // offset 0x1AD4, size 0x4, align 4
    char _pad_1AD8[0x8]; // offset 0x1AD8
};
