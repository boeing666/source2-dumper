#pragma once

class CNmGraphDocFlowGraph : public CNmGraphDocGraph /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlVector< CNmGraphDocFlowGraph::Connection_t > m_connections; // offset 0x58, size 0x18, align 8
};
