
#ifndef AUCTIONATORBASE_H
#define AUCTIONATORBASE_H

#include "AuctionatorBase.h"
#include "Log.h"

class AuctionatorBase
{
    private:
        std::string logPrefix = "[Auctionator] ";
    public:
        void logDebug(std::string message) {
            std::string output = logPrefix + message;
            LOG_DEBUG("module", output);
        }

        void logError(std::string message) {
            std::string output = logPrefix + message;
            LOG_ERROR("module", output);
        }

        void logInfo(std::string message) {
            std::string output = logPrefix + message;
            LOG_INFO("module", output);
        }

        void logTrace(std::string message) {
            std::string output = logPrefix + message;
            LOG_TRACE("module", output);
        }

        void SetLogPrefix(std::string prefix)
        {
            logPrefix = prefix;
        }
};

#endif
