#pragma once

class CTestPulseIO : public CLogicalEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnVariantVoid; // offset 0x778, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnVariantBool; // offset 0x790, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnVariantInt; // offset 0x7B0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnVariantFloat; // offset 0x7D0, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnVariantString; // offset 0x7F0, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnVariantColor; // offset 0x810, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnVariantVector; // offset 0x830, size 0x28, align 8
    bool m_bAllowEmptyInputs; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x7]; // offset 0x859
    CTestPulseIOComponent_Derived m_TestComponent; // offset 0x860, size 0x30, align 8
    CEntityIOOutput m_OnInternalTestVoid; // offset 0x890, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnInternalTestBool; // offset 0x8A8, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnInternalTestInt; // offset 0x8C8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnInternalTestFloat; // offset 0x8E8, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnInternalTestString; // offset 0x908, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnInternalTestColor; // offset 0x928, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnInternalTestVector; // offset 0x948, size 0x28, align 8
    CEntityOutputTemplate< CEntityNameString > m_OnInternalTestEntityName; // offset 0x970, size 0x20, align 8
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnInternalTestEntityHandle; // offset 0x990, size 0x20, align 8
    CEntityOutputTemplate< TestInputOutputCombinationsEnum_t > m_OnInternalTestSchemaEnum; // offset 0x9B0, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::FloatStringArgs_t > m_OnInternalTestFloatString; // offset 0x9D0, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityNameStringArgs_t > m_OnInternalTestEntityNameString; // offset 0x9F8, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityHandleIntArgs_t > m_OnInternalTestEntityHandleInt; // offset 0xA20, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::ThreeStringArgs_t > m_OnInternalTestStringStringString; // offset 0xA40, size 0x30, align 8
};
