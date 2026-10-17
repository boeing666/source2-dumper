#pragma once

class CVMixDescription : public CVMixBaseGraphDescription /*0x0*/  // sizeof 0x110, align 0x8 (soundsystem) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlLeanVector< CSubmix > m_submixList; // offset 0xD0, size 0x10, align 8 | MKV3TransferName
    CUtlLeanVector< std::unique_ptr< CVoiceContainerBase > > m_sources; // offset 0xE0, size 0x10, align 8
    CUtlLeanVector< uint64 > m_impulseResponseValues; // offset 0xF0, size 0x10, align 8
    uint32 m_nNameHashCode; // offset 0x100, size 0x4, align 4
    char _pad_0104[0xC]; // offset 0x104
};
