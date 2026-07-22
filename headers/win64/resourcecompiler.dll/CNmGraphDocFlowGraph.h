#pragma once

class CNmGraphDocFlowGraph : public CNmGraphDocGraph /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlVector< CNmGraphDocFlowGraph::Connection_t > m_connections; // offset 0x50, size 0x18, align 8
};
