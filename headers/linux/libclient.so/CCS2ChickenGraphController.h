#pragma once

class CCS2ChickenGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamAutoResetOptionalRef m_bActionReset; // offset 0xD8, size 0x20, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_actionVariation; // offset 0xF8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bInWater; // offset 0x110, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_mode; // offset 0x128, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_lifeStage; // offset 0x140, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_idlePhase; // offset 0x158, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_turnAngle; // offset 0x170, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bHasLookatTarget; // offset 0x188, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_lookatTarget; // offset 0x1A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bFlinch; // offset 0x1B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flinchVariation; // offset 0x1D0, size 0x18, align 8
    bool m_bHasActionCompletedEvent; // offset 0x1E8, size 0x1, align 1
    char _pad_01E9[0x7]; // offset 0x1E9
};
