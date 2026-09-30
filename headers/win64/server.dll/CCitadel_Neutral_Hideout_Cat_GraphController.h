#pragma once

class CCitadel_Neutral_Hideout_Cat_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x168, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamRef< float32 > m_flForwardSpeed; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flLookHeading; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flLookPitch; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamRef< float32 > m_flMoveSpeed; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_MoveType; // offset 0x120, size 0x18, align 8
    CAnimGraph2ParamRef< CGlobalSymbol > m_BaseAction; // offset 0x138, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flRandomSeed; // offset 0x150, size 0x18, align 8
};
