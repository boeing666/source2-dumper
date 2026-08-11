#pragma once

class CPulseCell_Base  // sizeof 0x48, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    PulseDocNodeID_t m_nEditorNodeID; // offset 0x8, size 0x4, align 255 | MFgdFromSchemaCompletelySkipField
    char _pad_000C[0x3C]; // offset 0xC
};
