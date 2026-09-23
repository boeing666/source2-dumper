#pragma once

class CChoreo_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eChoreoState; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CTransform > m_tChoreoTargetWarp; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CTransform > m_tChoreoExitWarp; // offset 0xF0, size 0x18, align 8
};
