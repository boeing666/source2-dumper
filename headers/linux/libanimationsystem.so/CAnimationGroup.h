#pragma once

class CAnimationGroup  // sizeof 0x140, align 0x8 [vtable] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    uint32 m_nFlags; // offset 0xC, size 0x4, align 4
    CBufferString m_name; // offset 0x10, size 0x10, align 8
    char _pad_0020[0x38]; // offset 0x20
    CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // offset 0x58, size 0x18, align 8 | MKV3TransferName
    CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // offset 0x70, size 0x18, align 8 | MKV3TransferName
    CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // offset 0x88, size 0x8, align 8 | MKV3TransferName
    CAnimKeyData m_decodeKey; // offset 0x90, size 0x78, align 8
    CUtlVector< CBufferString > m_szScripts; // offset 0x108, size 0x18, align 8
    CUtlVector< CStrongHandleVoid > m_AdditionalExtRefs; // offset 0x120, size 0x18, align 8
    char _pad_0138[0x8]; // offset 0x138
};
