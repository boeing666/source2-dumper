#pragma once

class CDOTA_Modifier_Windrunner_Tailwind_Counter : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 mostRecentBuffTime; // offset 0x1A78, size 0x4, align 4
    float32 initializeTime; // offset 0x1A7C, size 0x4, align 4
    float32 effectSpeedMax; // offset 0x1A80, size 0x4, align 4
    float32 effectSpeedMin; // offset 0x1A84, size 0x4, align 4
    float32 currentEffectSpeed; // offset 0x1A88, size 0x4, align 4
    Vector particleLingerInfo; // offset 0x1A8C, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A98, size 0x4, align 255
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
