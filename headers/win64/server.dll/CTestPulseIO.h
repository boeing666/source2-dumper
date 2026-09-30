#pragma once

class CTestPulseIO : public CLogicalEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnVariantVoid; // offset 0x4B0, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnVariantBool; // offset 0x4C8, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnVariantInt; // offset 0x4E8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnVariantFloat; // offset 0x508, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnVariantString; // offset 0x528, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnVariantColor; // offset 0x548, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnVariantVector; // offset 0x568, size 0x28, align 8
    bool m_bAllowEmptyInputs; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x7]; // offset 0x591
    CTestPulseIOComponent_Derived m_TestComponent; // offset 0x598, size 0x30, align 8
    CEntityIOOutput m_OnInternalTestVoid; // offset 0x5C8, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnInternalTestBool; // offset 0x5E0, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnInternalTestInt; // offset 0x600, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnInternalTestFloat; // offset 0x620, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnInternalTestString; // offset 0x640, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnInternalTestColor; // offset 0x660, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnInternalTestVector; // offset 0x680, size 0x28, align 8
    CEntityOutputTemplate< CEntityNameString > m_OnInternalTestEntityName; // offset 0x6A8, size 0x20, align 8
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnInternalTestEntityHandle; // offset 0x6C8, size 0x20, align 8
    CEntityOutputTemplate< TestInputOutputCombinationsEnum_t > m_OnInternalTestSchemaEnum; // offset 0x6E8, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::FloatStringArgs_t > m_OnInternalTestFloatString; // offset 0x708, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityNameStringArgs_t > m_OnInternalTestEntityNameString; // offset 0x730, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityHandleIntArgs_t > m_OnInternalTestEntityHandleInt; // offset 0x758, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::ThreeStringArgs_t > m_OnInternalTestStringStringString; // offset 0x778, size 0x30, align 8
};
