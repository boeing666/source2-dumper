#pragma once

class CCitadel_BreakableProp_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > m_bHitFlinch; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bHitReject; // offset 0xD8, size 0x18, align 8
};
