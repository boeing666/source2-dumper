#pragma once

class CVMixRuntimeGraph : public CVMixBaseGraphDescription /*0x0*/  // sizeof 0x128, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlLeanVector< CVMixSubmix > m_submixes; // offset 0xD0, size 0x10, align 8 | MKV3TransferName
    CUtlLeanVector< uint64 > m_impulseResponseValues; // offset 0xE0, size 0x10, align 8
    KeyValues3 m_inputDefaultValues; // offset 0xF0, size 0x10, align 8
    KeyValues3 m_sources; // offset 0x100, size 0x10, align 8
    CUtlVector< VMixPointerFixupEntry_t > m_fixups; // offset 0x110, size 0x18, align 8
};
