#include <string>
#include <iostream>

/*
 * <function name>
 *
 * <short description of what the function does>
 *
 * input: <short description of all input parameters>
 * output: <short description of all output parameters
 *          and the return value>
 */

/*
 * new_ending
 *
 * new_ending will create a new string whose contents are the
 * same as _candidate_ except that the last _suffix_length_
 * characters are replaced with the contents of _replacement_.
 *
 * input: candidate: The string of which to modify the ending.
 *        suffix_length: The number of characters to remove from _candidate_.
 *        replacement: The string with which to replace the
 *        last _suffix_length_ characters of _candidate_.
 * output: _candidate_ with the last _suffix_length_ characters
 *         replaced with the contents of _replacement_.
 */
std::string new_ending(std::string candidate, int suffix_length,
                       std::string replacement)
{
        std::string new_end = (candidate.substr(0, candidate.length() - suffix_length) + replacement);
        return new_end;

};

/*
 * ends_with
 *
 * ends_with determine whether _candidate_ ends with _suffix_.
 *
 * input: candidate: The string for which to check the ending.
 *        suffix: The string to test against the ending of _candidate_.
 * output: true if _candidate_ ends with _suffix_; false, otherwise.
 */
bool ends_with(std::string candidate, std::string suffix)
{
    if (candidate.length() >= suffix.length())
    {
        std::string possible_suffix = {candidate.substr(candidate.length() - suffix.length(), suffix.length())};
        return possible_suffix == suffix;
    }
    else
    {
        return false;
    }
}
/*
 * is_vowel
 *
 * Determine whether _c_ is a vowel. Note: 'y' is *not* a vowel.
 *
 * input: c: The character to check for "vowelness".
 * output: true, if _c_ is a vowel; false, otherwise.
 */
bool is_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
 * is_vowel
 *
 * Determine whether _c_ is a consonant. Note: 'y' is a consonant.
 *
 * input: c: The character to check for "consonantness".
 * output: true, if _c_ is a consonant; false, otherwise.
 */
bool is_consonant(char c)
{
    if (!is_vowel(c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
 * ends_with_double_consonant
 *
 * Determine whether _str_ ends with the same two letters
 * and those letters are both consonants. If _str_ has fewer
 * than two letters, the result is false.
 *
 * input: _str_: The string to check for a double-consontant ending.
 * output: true, if the string ends in the same two letters *and*
 *         those letters are both consontants; false, otherwise.
 *         false, if the string is shorter than 2 characters long.
 */
bool ends_with_double_consonant(std::string str)
{
    if (str.length() >= 2)
    {
        // if (is_vowel(str.at(str.length() - 1)))
        //{
        //     return false;
        // }
        // else
        //{

        if (is_consonant(str.at(str.length() - 1)) && is_consonant(str.at(str.length() - 2)) && (str[(str.length() - 1)] == (str[(str.length() - 2)])))
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
    else {
        return false;
    }

}


/*
 * count_consonants_at_front
 *
 * Count the number of consecutive consonants at the
 * start of _str_.
 *
 * input: str: The string from which to count the number of
 *        consecutive consonants at the front.
 * output: the number of consecutive consonants at
 *         the front of _str_. Note: Uses is_consonant to
 *         determine whether a character is a consonant.
 */
int count_consonants_at_front(std::string str)
{
    int counter{}, i{0};

    while (i < str.length() && is_consonant(str.at(i)))
    {
        i++;
        counter += 1;
    }
    return counter;
}

/*
 * count_vowels_at_back
 *
 * Count the number of consecutive vowels at the
 * end of _str_.
 *
 * input: str: The string from which to count the number of
 *        consecutive vowels at the end.
 * output: the number of consecutive consonants at
 *         the end of _str_. Note: Uses is_vowel to
 *         determine whether a character is a consonant.
 */
int count_vowels_at_back(std::string str)
{
    int counter{}, i{0};

    while (i < str.length() && is_vowel(str.at(str.length() - 1 - i)))
    {
        i++;
        counter += 1;
    }
    return counter;
}

/*
 * ends_with_cvc
 *
 * Determine whether _str_ ends with the combination of
 * a consonant, a vowel and a consonant. If _str_ is shorter
 * than three characters, the function returns false.
 *
 * input: str: The string to test for a consonant, vowel,
 *        consonant ending.
 * output: true, if _str_ ends in a combination of a consonant,
 *         vowel and consonant. false, otherwise. If _str_ is
 *         shorter than three characters, ends_with_cvc will return
 *         false.
 */
bool ends_with_cvc(std::string str)
{
    if (str.length() >= 3)
    {
        return is_consonant(str.at(str.length() - 1)) &&
               is_vowel(str.at(str.length() - 2)) &&
               is_consonant(str.at(str.length() - 3));
    }
    return false;
}

/*
 * contains_vowel
 *
 * Determine whether _str_ contains a vowel. Note, this function
 * uses is_vowel to determine whether a character is a vowel.
 *
 * input: str: The string to test for containing a vowel.
 * output: true, if _str_ contains a vowel; false, otherwise. Note:
 *         this function uses is_vowel to determine whether a
 *         character is a vowel.
 */
bool contains_vowel(std::string str)
{
    int i {0};
    while (i < str.length()){
        if(is_vowel(str.at(i))){
        return true;
        }
        i++;
    } return false;
   
}
