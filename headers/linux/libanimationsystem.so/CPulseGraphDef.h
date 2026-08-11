#pragma once

class CPulseGraphDef  // sizeof 0x1B0, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    PulseSymbol_t m_DomainIdentifier; // offset 0x8, size 0x10, align 8
    CPulseValueFullType m_DomainSubType; // offset 0x18, size 0x18, align 8
    PulseSymbol_t m_ParentMapName; // offset 0x30, size 0x10, align 8
    PulseSymbol_t m_ParentXmlName; // offset 0x40, size 0x10, align 8
    CUtlVector< CPulse_Chunk* > m_Chunks; // offset 0x50, size 0x18, align 8
    CUtlVector< CPulseCell_Base* > m_Cells; // offset 0x68, size 0x18, align 8
    CUtlVector< CPulse_Variable > m_Vars; // offset 0x80, size 0x18, align 8
    CUtlVector< CPulse_PublicOutput > m_PublicOutputs; // offset 0x98, size 0x18, align 8
    CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings; // offset 0xB0, size 0x18, align 8
    CUtlVector< CPulse_CallInfo* > m_CallInfos; // offset 0xC8, size 0x18, align 8
    CUtlVector< CPulse_Constant > m_Constants; // offset 0xE0, size 0x18, align 8
    CUtlVector< CPulse_DomainValue > m_DomainValues; // offset 0xF8, size 0x18, align 8
    CUtlVector< CPulse_BlackboardReference > m_BlackboardReferences; // offset 0x110, size 0x18, align 8
    CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // offset 0x128, size 0x18, align 8
    char _pad_0140[0x70]; // offset 0x140
};
