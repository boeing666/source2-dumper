#pragma once

class CPostProcessData  // sizeof 0x20, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CColorCorrectionLayer* > m_layers; // offset 0x8, size 0x18, align 8
};
