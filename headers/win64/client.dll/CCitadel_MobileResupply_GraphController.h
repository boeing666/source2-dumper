#pragma once

class CCitadel_MobileResupply_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flDrainScale; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bStartDrain; // offset 0xE8, size 0x28, align 8
};
