#pragma once

class CAnimReplayFrame  // sizeof 0x90, align 0x10 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< CUtlBinaryBlock > m_inputDataBlocks; // offset 0x10, size 0x18, align 8
    CUtlBinaryBlock m_instanceData; // offset 0x28, size 0x10, align 8
    char _pad_0038[0x8]; // offset 0x38
    CTransform m_startingLocalToWorldTransform; // offset 0x40, size 0x20, align 16
    CTransform m_localToWorldTransform; // offset 0x60, size 0x20, align 16
    float32 m_timeStamp; // offset 0x80, size 0x4, align 4
    char _pad_0084[0xC]; // offset 0x84
};
