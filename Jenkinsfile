pipeline {
    agent {
        docker { image 'mitrjain1996/calculator-env:latest' }
    }
    stages {
        stage('build') {
            steps{
                dir('cross-compile') {
                    sh 'ls -al'
                    sh 'chmod 777 build.sh'
                    sh './build.sh'
                }
            }
        }

        stage('test') {
            steps{
                sh 'pwd'
                sh './cross-compile/tests/test_Calculator'
            }
        }

        stage('publish') {
            steps{
                sh 'echo "Publish artificats."'
            }
        }
    }
}
