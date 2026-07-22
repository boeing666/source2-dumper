#pragma once

enum EClientReportingVersion : uint32_t  // sizeof 0x4
{
    k_EClientReportingVersion_OldVersion = 0,
    k_EClientReportingVersion_BetaVersion = 1,
    k_EClientReportingVersion_SupportsTrustedMode = 2,
};
