#pragma once

class CDOTA_Modifier_Morphling_Adaptive_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x1A78, size 0xC, align 4
    Vector m_vDirection; // offset 0x1A84, size 0xC, align 4
    float32 m_flTotalDistance; // offset 0x1A90, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1A94, size 0x4, align 4
};
