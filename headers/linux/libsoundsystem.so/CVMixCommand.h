#pragma once

class CVMixCommand  // sizeof 0x20, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    VMixGraphCommandID_t m_nCommand; // offset 0x0, size 0x4, align 4 | MKV3TransferName
    uint32 m_nParameterNameHash; // offset 0x4, size 0x4, align 4 | MKV3TransferName
    int32 m_nOutputSubmix; // offset 0x8, size 0x4, align 4 | MKV3TransferName
    int32 m_nInputSubmix0; // offset 0xC, size 0x4, align 4 | MKV3TransferName
    int32 m_nInputSubmix1; // offset 0x10, size 0x4, align 4 | MKV3TransferName
    int32 m_nProcessor; // offset 0x14, size 0x4, align 4 | MKV3TransferName
    int32 m_nInputValue0; // offset 0x18, size 0x4, align 4 | MKV3TransferName
    int32 m_nInputValue1; // offset 0x1C, size 0x4, align 4 | MKV3TransferName
};
