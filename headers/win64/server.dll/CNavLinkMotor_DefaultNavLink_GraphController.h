#pragma once

class CNavLinkMotor_DefaultNavLink_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x138, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraph2ParamRef< CTransform > m_tNavLinkTarget; // offset 0x90, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkEntryType; // offset 0xA8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkExitType; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkState; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkEntryGait; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkExitGait; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_vNavLinkExitDirection; // offset 0x120, size 0x18, align 8
};
