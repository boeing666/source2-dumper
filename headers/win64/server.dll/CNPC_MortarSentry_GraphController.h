#pragma once

class CNPC_MortarSentry_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flPanel1; // offset 0x7F0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bUnpackInstant; // offset 0x818, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flVelocity; // offset 0x840, size 0x28, align 8
};
