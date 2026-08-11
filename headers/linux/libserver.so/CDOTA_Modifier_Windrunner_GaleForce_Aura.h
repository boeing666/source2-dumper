#pragma once

class CDOTA_Modifier_Windrunner_GaleForce_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x1A78, size 0xC, align 4
    VectorWS m_vFlowPosition; // offset 0x1A84, size 0xC, align 4
    float32 radius; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
