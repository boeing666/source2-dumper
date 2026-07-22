#pragma once

class C_Citadel_BreakableProp_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< bool > m_bSetInit; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flDamageReceived; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bOnRespawn; // offset 0xE0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bHitTrigger; // offset 0x108, size 0x28, align 8
};
