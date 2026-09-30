#pragma once

class CCitadel_Hideout_Clock_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_flHour; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMinute; // offset 0xD8, size 0x18, align 8
};
