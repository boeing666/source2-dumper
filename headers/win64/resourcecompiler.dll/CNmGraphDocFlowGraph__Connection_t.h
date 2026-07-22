#pragma once

struct CNmGraphDocFlowGraph::Connection_t  // sizeof 0x50, align 0x4 [trivial_ctor trivial_dtor] (animdoclib) {MGetKV3ClassDefaults}
{
    V_uuid_t m_ID; // offset 0x0, size 0x10, align 4
    V_uuid_t m_fromNodeID; // offset 0x10, size 0x10, align 4
    V_uuid_t m_outputPinID; // offset 0x20, size 0x10, align 4
    V_uuid_t m_toNodeID; // offset 0x30, size 0x10, align 4
    V_uuid_t m_inputPinID; // offset 0x40, size 0x10, align 4
};
