#pragma once

class CNPC_TeslaCoil_GraphController : public CNPC_SimpleAnimatingAI_GraphController /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xB8]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flPanel1; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flVelocity; // offset 0xE0, size 0x28, align 8
};
