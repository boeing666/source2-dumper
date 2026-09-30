#pragma once

class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x378, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    VectorWS m_vDropStartLocation; // offset 0x148, size 0xC, align 4
    float32 m_flLiftDuration; // offset 0x154, size 0x4, align 4
    char _pad_0158[0x210]; // offset 0x158
    VectorWS m_vecSlamDest; // offset 0x368, size 0xC, align 4
    bool m_bImpacted; // offset 0x374, size 0x1, align 1
    char _pad_0375[0x3]; // offset 0x375
};
