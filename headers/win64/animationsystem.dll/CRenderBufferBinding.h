#pragma once

class CRenderBufferBinding  // sizeof 0x20, align 0x8 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    uint64 m_hBuffer; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x8]; // offset 0x8
    uint32 m_nBindOffsetBytes; // offset 0x10, size 0x4, align 4
    char _pad_0014[0xC]; // offset 0x14
};
