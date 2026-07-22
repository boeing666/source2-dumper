#pragma once

class CAnimationGroup  // sizeof 0x148, align 0x8 [vtable] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    uint32 m_nFlags; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CBufferString m_name; // offset 0x18, size 0x10, align 8
    char _pad_0028[0x38]; // offset 0x28
    CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // offset 0x60, size 0x18, align 8 | MKV3TransferName
    CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // offset 0x78, size 0x18, align 8 | MKV3TransferName
    CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // offset 0x90, size 0x8, align 8 | MKV3TransferName
    CAnimKeyData m_decodeKey; // offset 0x98, size 0x78, align 8
    CUtlVector< CBufferString > m_szScripts; // offset 0x110, size 0x18, align 8
    CUtlVector< CStrongHandleVoid > m_AdditionalExtRefs; // offset 0x128, size 0x18, align 8
    char _pad_0140[0x8]; // offset 0x140
};
