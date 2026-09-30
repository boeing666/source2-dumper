#pragma once

class CNPC_BaseDefenseSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController /*0x0*/  // sizeof 0x160, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flPanel1; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bUnpackInstant; // offset 0xE8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flVelocity; // offset 0x110, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bAlert; // offset 0x138, size 0x28, align 8
};
