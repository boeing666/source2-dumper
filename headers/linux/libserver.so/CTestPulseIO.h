#pragma once

class CTestPulseIO : public CLogicalEntity /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnVariantVoid; // offset 0x788, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnVariantBool; // offset 0x7A0, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnVariantInt; // offset 0x7C0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnVariantFloat; // offset 0x7E0, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnVariantString; // offset 0x800, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnVariantColor; // offset 0x820, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnVariantVector; // offset 0x840, size 0x28, align 8
    bool m_bAllowEmptyInputs; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x7]; // offset 0x869
    CTestPulseIOComponent_Derived m_TestComponent; // offset 0x870, size 0x30, align 8
    CEntityIOOutput m_OnInternalTestVoid; // offset 0x8A0, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnInternalTestBool; // offset 0x8B8, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnInternalTestInt; // offset 0x8D8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnInternalTestFloat; // offset 0x8F8, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnInternalTestString; // offset 0x918, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnInternalTestColor; // offset 0x938, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnInternalTestVector; // offset 0x958, size 0x28, align 8
    CEntityOutputTemplate< CEntityNameString > m_OnInternalTestEntityName; // offset 0x980, size 0x20, align 8
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnInternalTestEntityHandle; // offset 0x9A0, size 0x20, align 8
    CEntityOutputTemplate< TestInputOutputCombinationsEnum_t > m_OnInternalTestSchemaEnum; // offset 0x9C0, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::FloatStringArgs_t > m_OnInternalTestFloatString; // offset 0x9E0, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityNameStringArgs_t > m_OnInternalTestEntityNameString; // offset 0xA08, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityHandleIntArgs_t > m_OnInternalTestEntityHandleInt; // offset 0xA30, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::ThreeStringArgs_t > m_OnInternalTestStringStringString; // offset 0xA50, size 0x30, align 8
};
