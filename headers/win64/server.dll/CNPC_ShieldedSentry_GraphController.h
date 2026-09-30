#pragma once

class CNPC_ShieldedSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController /*0x0*/  // sizeof 0x190, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flDeployTime; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_eBaseAction; // offset 0xE8, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_flLookHeading; // offset 0x118, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flLookPitch; // offset 0x140, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bShoot; // offset 0x168, size 0x28, align 8
};
