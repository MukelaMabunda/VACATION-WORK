#ifndef CABLECURRENT_H
#define CABLECURRENT_H

#include "Cable.h"

class cableCurrent
{
private:
    constexpr unsigned int float2string2int(const char* str, int h)
    {
        return !str[h] ? 5381 : (float2string2int(str, h+1) * 33) ^ str[h];
    }

    enum string_code
    {
        eFred,
        eBarney,
        eWilma,
        eBetty,
    };

    string_code hashit (std::string const& inString)
    {
        if (inString == "Fred") return eFred;
        if (inString == "Barney") return eBarney;
    }

    void foo()
    {
        switch (hashit("first value"))
        {
        case eFred:
        case eBarney:
            break;
        }
    }

public:
cableCurrent(InstallMethod method, float cableSize, unsigned int noOfCables, inFreeAir freeAir)
{
    string cableSize_ = to_string(cableSize);
    /*switch (hash(cableSize_))
    {
    case InstallMethod::Method_1:
    {
        if (noOfCables == 2)
        {
            switch (cableSize_)
            {
            case 1:
                current = 11;
                break;
            case 1.5:
                current = 14.5;
                break;
            case 2.5:
                current = 19.5;
                break;
            case 4:
                current = 26;
                break;
            case 6:
                current = 34;
                break;
            case 10:
                current = 46;
                break;
            case 16:
                current = 61;
                break;
            case 25:
                current = 14.5;
                break;
            case 35:
                current = 99;
                break;
            case 50:
                current = 119;
                break;
            case 70:
                current = 151;
                break;
            case 95:
                current = 182;
                break;
            case 120:
                current = 210;
                break;
            case 150:
                current = 240;
                break;
            case 185:
                current = 273;
                break;
            case 240:
                current = 320;
                break;
            case 300:
                current = 367;
                break;
            case 400:
            case 500:
            case 630:
            case 800:
            case 1000:
                throw "Invalid size for method";
                break;
            }
        }
        else if (noOfCables == 3 || noOfCables == 4)
        {
            switch (cableSize)
            {
            case 1:
                current = 10.5;
                break;
            case 1.5:
                current = 13.5;
                break;
            case 2.5:
                current = 18;
                break;
            case 4:
                current = 24;
                break;
            case 6:
                current = 31;
                break;
            case 10:
                current = 42;
                break;
            case 16:
                current = 56;
                break;
            case 25:
                current = 73;
                break;
            case 35:
                current = 89;
                break;
            case 50:
                current = 108;
                break;
            case 70:
                current = 136;
                break;
            case 95:
                current = 164;
                break;
            case 120:
                current = 188;
                break;
            case 150:
                current = 216;
                break;
            case 185:
                current = 245;
                break;
            case 240:
                current = 286;
                break;
            case 300:
                current = 328;
                break;
            case 400:
            case 500:
            case 630:
            case 800:
            case 1000:
                throw "Invalid size for method";
                break;
            }
            else
            {
                throw "Invalid number of cables for the method 1";
            }
            break;
        }
        case InstallMethod::Method_2:
        {
            if (noOfCables == 2)
            {
                switch (cableSize)
                {
                case 1:
                    current = 13.5;
                    break;
                case 1.5:
                    current = 17.5;
                    break;
                case 2.5:
                    current = 24;
                    break;
                case 4:
                    current = 32;
                    break;
                case 6:
                    current = 41;
                    break;
                case 10:
                    current = 57;
                    break;
                case 16:
                    current = 76;
                    break;
                case 25:
                    current = 101;
                    break;
                case 35:
                    current = 125;
                    break;
                case 50:
                    current = 151;
                    break;
                case 70:
                    current = 192;
                    break;
                case 95:
                    current = 232;
                    break;
                case 120:
                    current = 269;
                    break;
                case 150:
                    current = 300;
                    break;
                case 185:
                    current = 341;
                    break;
                case 240:
                    current = 400;
                    break;
                case 300:
                    current = 458;
                    break;
                case 400:
                    current = 546;
                    break;
                case 500:
                    current = 626;
                    break;
                case 630:
                    current = 720;
                    break;
                case 800:
                case 1000:
                    throw "Invalid size for method";
                    break;
                }
            }
        }
        else if (noOfCables == 3 || noOfCables == 4)
        {
            switch (cableSize)
            {
            case 1:
                current = 12;
                break;
            case 1.5:
                current = 15.5;
                break;
            case 2.5:
                current = 21;
                break;
            case 4:
                current = 28;
                break;
            case 6:
                current = 36;
                break;
            case 10:
                current = 50;
                break;
            case 16:
                current = 68;
                break;
            case 25:
                current = 89;
                break;
            case 35:
                current = 110;
                break;
            case 50:
                current = 134;
                break;
            case 70:
                current = 171;
                break;
            case 95:
                current = 207;
                break;
            case 120:
                current = 239;
                break;
            case 150:
                current = 262;
                break;
            case 185:
                current = 296;
                break;
            case 240:
                current = 346;
                break;
            case 300:
                current = 394;
                break;
            case 400:
                current = 467;
                break;
            case 500:
                current = 533;
                break;
            case 630:
                current = 611;
                break;
            case 800:
            case 1000:
                throw "Invalid size for method";
                break;
            }
        }
        else
        {
            throw "Invalid number of cables for the method 2";
        }
        break;
    }
    case InstallMethod::Method_3:
    {
        if (noOfCables == 2)
        {
            switch (cableSize)
            {
            case 1:
                current = 15.5;
                break;
            case 1.5:
                current = 20;
                break;
            case 2.5:
                current = 27;
                break;
            case 4:
                current = 37;
                break;
            case 6:
                current = 47;
                break;
            case 10:
                current = 65;
                break;
            case 16:
                current = 87;
                break;
            case 25:
                current = 114;
                break;
            case 35:
                current = 141;
                break;
            case 50:
                current = 182;
                break;
            case 70:
                current = 234;
                break;
            case 95:
                current = 284;
                break;
            case 120:
                current = 330;
                break;
            case 150:
                current = 384;
                break;
            case 185:
                current = 436;
                break;
            case 240:
                current = 515;
                break;
            case 300:
                current = 594;
                break;
            case 400:
                current = 694;
                break;
            case 500:
                current = 792;
                break;
            case 630:
                current = 904;
                break;
            case 800:
                current = 1030;
                break;
            case 1000:
                current = 1154;
                break;
            }
        }
        else if (noOfCables == 3 || noOfCables == 4)
        {
            switch (cableSize)
            {
            case 1:
                current = 14;
                break;
            case 1.5:
                current = 18;
                break;
            case 2.5:
                current = 25;
                break;
            case 4:
                current = 33;
                break;
            case 6:
                current = 43;
                break;
            case 10:
                current = 59;
                break;
            case 16:
                current = 79;
                break;
            case 25:
                current = 104;
                break;
            case 35:
                current = 129;
                break;
            case 50:
                current = 167;
                break;
            case 70:
                current = 214;
                break;
            case 95:
                current = 261;
                break;
            case 120:
                current = 303;
                break;
            case 150:
                current = 349;
                break;
            case 185:
                current = 400;
                break;
            case 240:
                current = 472;
                break;
            case 300:
                current = 545;
                break;
            case 400:
                current = 634;
                break;
            case 500:
                current = 723;
                break;
            case 630:
                current = 826;
                break;
            case 800:
                current = 943;
                break;
            case 1000:
                current = 1058;
                break;
            }
        }
        else
        {
            throw "Invalid number of cables for the method 3";
        }
        break;
    }
    case InstallMethod::Method_4:
    {
        if (noOfCables == 2)
        {
            switch (cableSize)
            {
            case 1:
            case 1.5:
            case 2.5:
            case 4:
            case 6:
            case 10:
            case 16:
                throw "Invalid size for method";
                break;
            case 25:
                current = 126;
                break;
            case 35:
                current = 156;
                break;
            case 50:
                current = 191;
                break;
            case 70:
                current = 246;
                break;
            case 95:
                current = 300;
                break;
            case 120:
                current = 349;
                break;
            case 150:
                current = 404;
                break;
            case 185:
                current = 463;
                break;
            case 240:
                current = 549;
                break;
            case 300:
                current = 635;
                break;
            case 400:
                current = 732;
                break;
            case 500:
                current = 835;
                break;
            case 630:
                current = 953;
                break;
            case 800:
                current = 1086;
                break;
            case 1000:
                current = 1216;
                break;
            }
        }
        else if (noOfCables == 3 || noOfCables == 4)
        {
            switch (cableSize)
            {
            case 1:
            case 1.5:
            case 2.5:
            case 4:
            case 6:
            case 10:
            case 16:
                throw "Invalid size for method";
                break;
            case 25:
                current = 112;
                break;
            case 35:
                current = 141;
                break;
            case 50:
                current = 172;
                break;
            case 70:
                current = 223;
                break;
            case 95:
                current = 273;
                break;
            case 120:
                current = 318;
                break;
            case 150:
                current = 369;
                break;
            case 185:
                current = 424;
                break;
            case 240:
                current = 504;
                break;
            case 300:
                current = 584;
                break;
            case 400:
                current = 679;
                break;
            case 500:
                current = 778;
                break;
            case 630:
                current = 892;
                break;
            case 800:
                current = 1020;
                break;
            case 1000:
                current = 1149;
                break;
            }
        }
        else
        {
            throw "Invalid number of cables for the method 4";
        }
        break;
    }
    case InstallMethod::Method_5:
    {
        if (noOfCables == 2 || noOfCables == 3 || noOfCables == 4)
        {
            if (freeAir == inFreeAir::Horizontal)
            {
                switch (cableSize)
                {
                case 1:
                case 1.5:
                case 2.5:
                case 4:
                case 6:
                case 10:
                case 16:
                    throw "Invalid size for method";
                    break;
                case 25:
                    current = 146;
                    break;
                case 35:
                    current = 181;
                    break;
                case 50:
                    current = 219;
                    break;
                case 70:
                    current = 281;
                    break;
                case 95:
                    current = 341;
                    break;
                case 120:
                    current = 396;
                    break;
                case 150:
                    current = 456;
                    break;
                case 185:
                    current = 521;
                    break;
                case 240:
                    current = 615;
                    break;
                case 300:
                    current = 709;
                    break;
                case 400:
                    current = 852;
                    break;
                case 500:
                    current = 982;
                    break;
                case 630:
                    current = 1138;
                    break;
                case 800:
                    current = 1265;
                    break;
                case 1000:
                    current = 1420;
                    break;
                }
            }
            else if (freeAir == inFreeAir::Vertical)
            {
                switch (cableSize)
                {
                case 1:
                case 1.5:
                case 2.5:
                case 4:
                case 6:
                case 10:
                case 16:
                    throw "Invalid size for method";
                    break;
                case 25:
                    current = 130;
                    break;
                case 35:
                    current = 162;
                    break;
                case 50:
                    current = 197;
                    break;
                case 70:
                    current = 254;
                    break;
                case 95:
                    current = 311;
                    break;
                case 120:
                    current = 362;
                    break;
                case 150:
                    current = 419;
                    break;
                case 185:
                    current = 480;
                    break;
                case 240:
                    current = 569;
                    break;
                case 300:
                    current = 659;
                    break;
                case 400:
                    current = 795;
                    break;
                case 500:
                    current = 920;
                    break;
                case 630:
                    current = 1070;
                    break;
                case 800:
                    current = 1188;
                    break;
                case 1000:
                    current = 1337;
                    break;
                }
            }
            else if (freeAir == inFreeAir::Trefoil)
            {
                switch (cableSize)
                {
                case 1:
                case 1.5:
                case 2.5:
                case 4:
                case 6:
                case 10:
                case 16:
                    throw "Invalid size for method";
                    break;
                case 25:
                    current = 110;
                    break;
                case 35:
                    current = 137;
                    break;
                case 50:
                    current = 167;
                    break;
                case 70:
                    current = 216;
                    break;
                case 95:
                    current = 264;
                    break;
                case 120:
                    current = 308;
                    break;
                case 150:
                    current = 356;
                    break;
                case 185:
                    current = 409;
                    break;
                case 240:
                    current = 485;
                    break;
                case 300:
                    current = 561;
                    break;
                case 400:
                    current = 656;
                    break;
                case 500:
                    current = 749;
                    break;
                case 630:
                    current = 855;
                    break;
                case 800:
                    current = 971;
                    break;
                case 1000:
                    current = 1079;
                    break;
                }
            }
            throw "Invalid installation for (in free air) choose between Horizontal/Vertical flat spaced and Trefoil"
        }
        else
        {
            throw "Invalid number of cables for the method 5";
        }
        break;
    }
    }*/
}
double current = 0;
};

#endif // CABLECURRENT_H
