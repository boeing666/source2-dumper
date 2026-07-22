#pragma once

class CCS2ChickenGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x140, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // offset 0x88, size 0x18, align 8
    CAnimGraph2ParamAutoResetOptionalRef m_bActionReset; // offset 0xA0, size 0x20, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_idleVariation; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_runVariation; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_panicVariation; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_squatVariation; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bInWater; // offset 0x120, size 0x18, align 8
    bool m_bHasActionCompletedEvent; // offset 0x138, size 0x1, align 1
    bool m_bWaitingForCompletedEvent; // offset 0x139, size 0x1, align 1
    char _pad_013A[0x6]; // offset 0x13A
};
